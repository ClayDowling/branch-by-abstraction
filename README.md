# Branching by Abstraction

It happens to all of us: there's something you want to test out, to see if a change will fix a problem in your large code base, but it's full of horrible dependencies that are impossible to isolate and control for your test.  You need to refactor, but you can't do it without touching every file and creating the mother of all merge conflicts.

Thankfully, there's a handy little cheat, called Branching by Abstraction.  You're going to create your own private interface to the rest of the system, without breaking everbody else's.

Follow through the git history of this repository to see how it went from a horrible snarl of global variables and intractible dependencies to its present easy to test and modify state.