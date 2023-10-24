//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBProcess, FBProcessState;

@protocol FBProcessObserver <NSObject>

@optional
- (void)process:(FBProcess *)arg1 stateDidChangeFromState:(FBProcessState *)arg2 toState:(FBProcessState *)arg3;
- (void)processDidExit:(FBProcess *)arg1;
- (void)processWillExit:(FBProcess *)arg1;
@end

