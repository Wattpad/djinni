#import <Foundation/Foundation.h>

@interface WPEither<__covariant LeftType, __covariant RightType> : NSObject

@property (nonatomic, readonly) BOOL isLeft;
@property (nonatomic, readonly) BOOL isRight;
@property (nonatomic, readonly, nullable) LeftType left;
@property (nonatomic, readonly, nullable) RightType right;

- (nonnull instancetype)initWithLeft:(nonnull LeftType)left;
- (nonnull instancetype)initWithRight:(nonnull RightType)right;

@end
