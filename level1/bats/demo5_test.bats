#!/usr/bin/env bats

@test "demo5 program runs" {
  run ./demo5.exe <<< "1"
  [ "$status" -eq 0 ]
}
