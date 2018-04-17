#pragma once

// These are often addressed relative to each other (esp. delta SIZE_MEDIUM).
enum size_type
{
    SIZE_TINY,              // rats/bats
    SIZE_LITTLE,            // spriggans
    SIZE_SMALL,             // halflings/kobolds
    SIZE_MEDIUM,            // humans/elves/dwarves
    SIZE_LARGE,             // trolls/ogres/centaurs/nagas/dugongs
    SIZE_BIG,               // large quadrupeds
    SIZE_GIANT,             // giants
    NUM_SIZE_LEVELS,
    SIZE_CHARACTER,         // transformations that don't change size
};
