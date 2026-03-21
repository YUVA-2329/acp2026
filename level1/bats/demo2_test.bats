#!/usr/bin/env bats

@test "demo2 program runs" {
  run ./demo2.exe <<< "1"
  [ "$status" -eq 0 ]
}
