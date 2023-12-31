//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameInternal, NSString;

@interface GKTestToolClientProxy
{
    GKGameInternal *_testGame;	// 8 = 0x8
    NSString *_testProtocolVersion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000016d098
@property(retain, nonatomic) NSString *testProtocolVersion; // @synthesize testProtocolVersion=_testProtocolVersion;
@property(retain, nonatomic) GKGameInternal *testGame; // @synthesize testGame=_testGame;
- (id)protocolVersion;	// IMP=0x001000000016cfd6
- (id)externalVersion;	// IMP=0x001000000016cecf
- (id)adamID;	// IMP=0x001000000016cdc8
- (id)bundleShortVersion;	// IMP=0x001000000016ccc1
- (id)bundleVersion;	// IMP=0x001000000016cbba
- (id)bundleIdentifier;	// IMP=0x001000000016cab3
- (id)transportWithCredential:(id)arg1;	// IMP=0x001000000016c9f3
- (_Bool)isPosingAsGameCenter;	// IMP=0x001000000016c95b
- (oneway void)setTestGame:(id)arg1 protocolVersion:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000016c4b8

@end

