//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXPlaceholder;

@protocol IXCoordinatorWithPlaceholderPromise <NSObject>
@property(readonly, nonatomic) _Bool hasPlaceholderPromise;
- (IXPlaceholder *)placeholderPromiseWithError:(id *)arg1;
- (_Bool)setPlaceholderPromise:(IXPlaceholder *)arg1 error:(id *)arg2;
@end

