#!/usr/bin/env bats

@test "demo6 program runs" {
  run ./demo6.exe <<< "1"
  [ "$status" -eq 0 ]
}
