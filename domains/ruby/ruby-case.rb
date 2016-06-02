def identify_class(obj)
    # write your case control structure here
    print "It's a"
    case obj
    when Hacker
        print " Hacker!";
    when Submission
        print " Submission!";
    when TestCase
        print " TestCase!";
    when Contest
        print " Contest!";
    else
        print "n unknown model"
    end
    puts "";
end