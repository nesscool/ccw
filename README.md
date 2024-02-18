this is the beginning of the convict conditioning workout program

TODO:

create base app (single user) that will tell you the WoD (workout of the day).

Initially.. it will simply report the L1 exersize steps (with no history).

Otherwise, it will ask you the type of workout program you intend to follow ..
and then try to map the workout days to your future calendar..
e.g.
What program do you want to follow??
Do you want to start working out? MTWRFSX
Then it will show you the anticipated weekly workout schedule
If you don't like it, then you can go back and choose another starting day

Then it will persist your workout info and focus on next exersize set..
If it is a rest day .. then it will say rest day.. but still can walk / hike
If it is the workout day .. then it will report the new workout..
If you missed a day.. and the following day is a rest day.. then it will let you workout..
If you missed +1 day, then your workout schedule will slide.

A couple abstractions come to mind..
1st) the date object / provider needs to be an interface for testing purposes
2nd) the workout schema needs to be established to encode/decode workouts
     as well as to introduce interface for testability without need to worry about
     the encode/decode process

