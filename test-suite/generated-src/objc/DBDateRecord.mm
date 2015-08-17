// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#import "DBDateRecord.h"


@implementation DBDateRecord

- (nonnull instancetype)initWithCreatedAt:(nonnull NSDate *)createdAt
{
    if (self = [super init]) {
        _createdAt = createdAt;
    }
    return self;
}

+ (nonnull instancetype)dateRecordWithCreatedAt:(nonnull NSDate *)createdAt
{
    return [[self alloc] initWithCreatedAt:createdAt];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[DBDateRecord class]]) {
        return NO;
    }
    DBDateRecord *typedOther = (DBDateRecord *)other;
    return [self.createdAt isEqual:typedOther.createdAt];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            ((NSUInteger)self.createdAt.timeIntervalSinceReferenceDate);
}

- (NSComparisonResult)compare:(DBDateRecord *)other
{
    NSComparisonResult tempResult;
    tempResult = [self.createdAt compare:other.createdAt];
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    return NSOrderedSame;
}

@end
