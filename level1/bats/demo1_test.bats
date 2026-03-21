#!/usr/bin/env bats

@test "demo1 program runs" {
  run ./demo1.exe <<< "1"
  [ "$status" -eq 0 ]
}
