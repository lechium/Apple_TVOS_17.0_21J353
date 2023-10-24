//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PBSDefaultsTestingProtocol;

@interface PBSystemUIServiceHintManager : NSObject
{
    id <PBSDefaultsTestingProtocol> _defaults;	// 8 = 0x8
    NSString *_activeHeadBoardUserID;	// 16 = 0x10
}

+ (id)_userInfoDictKeyForUserID:(id)arg1;	// IMP=0x00200000000d0b65
- (void).cxx_destruct;	// IMP=0x00200000000d0b9b
- (void)_setUserInfoObject:(id)arg1 forKey:(id)arg2 userID:(id)arg3;	// IMP=0x00100000000d0a50
- (id)_userInfoObjectOfClass:(Class)arg1 forKey:(id)arg2 userID:(id)arg3;	// IMP=0x00100000000d09aa
- (void)_setUserInfoInteger:(unsigned long long)arg1 forKey:(id)arg2 userID:(id)arg3;	// IMP=0x00100000000d087c
- (unsigned long long)_userInfoIntegerForKey:(id)arg1 userID:(id)arg2;	// IMP=0x00100000000d07bb
- (id)_hintInfoDictForUserID:(id)arg1;	// IMP=0x00100000000d06fc
- (void)didAccessControlCenterForUserID:(id)arg1;	// IMP=0x00100000000d0666
- (void)didShowHintForUserID:(id)arg1;	// IMP=0x00100000000d0579
- (void)setHeadBoardActive:(_Bool)arg1 forUserID:(id)arg2;	// IMP=0x00100000000d03e1
- (_Bool)shouldDisplayHintForUserID:(id)arg1;	// IMP=0x00100000000d0262
- (id)initWithDefaults:(id)arg1;	// IMP=0x00100000000d01f7
- (id)init;	// IMP=0x00100000000d019d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
