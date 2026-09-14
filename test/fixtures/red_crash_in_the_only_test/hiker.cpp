// answer() dereferences a null pointer, so the test binary takes a signal
// part way through the run. Boost.Test's execution monitor traps the signal,
// counts the test case as failed, and still prints the summary line the
// rag-lambda reads, so a crash here reaches red rather than amber.

#include "hiker.hpp"

int answer()
{
    int * const nowhere = nullptr;
    return *nowhere;
}
