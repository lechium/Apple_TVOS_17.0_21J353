//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVCSRestrictionsControllerObserverUserInfo : NSObject
{
    struct {
        unsigned int respondsToDidUpdate:1;
        unsigned int respondsToDidChangeAreRestrictionsEnabled:1;
    } _observerFlags;	// 8 = 0x8
}

@property(nonatomic) _Bool respondsToDidChangeAreRestrictionsEnabled;
@property(nonatomic) _Bool respondsToDidUpdate;

@end
