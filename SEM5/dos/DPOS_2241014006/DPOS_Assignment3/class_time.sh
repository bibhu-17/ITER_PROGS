#!/bin/bash

echo "Enter a day:"
read day

case $day in
  Monday)
    echo "DOS class time: 10:00 AM - 11:00 AM, Room 101"
    ;;
  Tuesday)
    echo "DOS class time: 12:00 PM - 1:00 PM, Room 202"
    ;;
  Wednesday)
    echo "DOS class time: 2:00 PM - 3:00 PM, Room 303"
    ;;
  Thursday)
    echo "DOS class time: 11:00 AM - 12:00 PM, Room 404"
    ;;
  Friday)
    echo "DOS class time: 1:00 PM - 2:00 PM, Room 505"
    ;;
  Saturday)
    echo "No class on $day"
    ;;
  Sunday)
    echo "Holiday"
    ;;
  *)
    echo "Invalid day entered"
    ;;
esac

