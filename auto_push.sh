#!/bin/bash

while true
do
  git add .
  
  # Check if there are changes
  if ! git diff --cached --quiet
  then
    git commit -m "auto update"
    git push
    echo "Changes pushed at $(date)"
  else
    echo "No changes"
  fi

  sleep 60
done