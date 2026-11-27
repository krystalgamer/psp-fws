#!/usr/bin/env bash
# Isolated git worktree for one worker: tmp/agents/NAME/wt on branch agent/NAME (from master),
# with the shared read-only inputs (toolchains, baseroms, references, venv) symlinked; its own
# tmp/asm and tmp/build. Usage: tools/agent_worktree.sh NAME
set -e
cd "$(dirname "$0")/.."
R=$PWD; N=$1; W=$R/tmp/agents/$N/wt
mkdir -p "$R/tmp/agents/$N"
[ -d "$W" ] || git worktree add -q -b "agent/$N" "$W" master 2>/dev/null || git worktree add -q "$W" "agent/$N"
mkdir -p "$W/tmp"
for d in toolchains baserom uofw psplibdoc libdoc permuter notes dwarf classify assets; do
    [ -e "$R/tmp/$d" ] && ln -sfn "$R/tmp/$d" "$W/tmp/$d"
done
ln -sfn "$R/.venv" "$W/.venv"
[ -e "$R/inputs" ] && ln -sfn "$R/inputs" "$W/inputs"
echo "$W"
