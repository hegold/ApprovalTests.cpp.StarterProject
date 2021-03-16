/*
Learnings:
Sync on the goal at start - ensure everyone knows the problem
When in the mob and biting one's tongue - write it down

Good:
Learned about VAX "introduce variable" refactoring through seeing it used
Specific, iterative goals
Achieved all the goals very quickly
Nice to hear everyones input
Automated testing in place

Bad:
Slow connections bad for screen sharing
Could have whiteboarded upfront
Abbreviating the goals (removing "instead") to show up on mobti.me caused confusion
A little bit of emotional triggering from being "on the spot"
Felt limiting - picking up from last person
Frustrating sitting idle with ideas - wanted to shout out
Wish we could have unit tested

*/


namespace FizzBuzz
{
    void printFizzBuzz(std::stringstream& output)
    {
        for (int i = 1; i <= 100; ++i)
        {
            bool fizz = i % 3 == 0;
            bool buzz = i % 5 == 0;
            if (fizz && buzz)
            {
                output << "FizzBuzz";
            }
            else if (fizz)
            {
                output << "Fizz";
            }
            else if (buzz)
            {
                output << "Buzz";
            }
            else
            {
                output << i;
            }
            output << "\n";
        }
    }
}