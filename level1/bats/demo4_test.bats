#!/usr/bin/env bats

@test "demo4 program runs" {
  run ./demo4.exe <<< "1"
  [ "$status" -eq 0 ]
}
