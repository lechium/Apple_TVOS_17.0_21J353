//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDUser, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeDataPushDestination : NSObject
{
    _Bool _ignoreConfigCompare;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    HMDUser *_user;	// 24 = 0x18
    NSString *_destination;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000849272
@property(nonatomic) _Bool ignoreConfigCompare; // @synthesize ignoreConfigCompare=_ignoreConfigCompare;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *pushDestination;
- (id)description;	// IMP=0x00000000008490bb
- (id)initWithUser:(id)arg1 destination:(id)arg2;	// IMP=0x0000000000848ff9

@end

