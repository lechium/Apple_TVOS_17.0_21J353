//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKChallengeServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000008bd0b
+ (Class)interfaceClass;	// IMP=0x001000000008bcfa
- (oneway void)startGame:(id)arg1 withChallenge:(id)arg2;	// IMP=0x002000000008c473
- (oneway void)getCountOfChallengesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008bd16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

