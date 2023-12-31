//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TVNPOutputDeviceRoute;

@interface TVNPGroupedRoute
{
    TVNPOutputDeviceRoute *_leader;	// 96 = 0x60
    NSArray *_members;	// 104 = 0x68
}

+ (id)_titleForGroupWithMembers:(id)arg1 leader:(id)arg2;	// IMP=0x004000000000af90
- (void).cxx_destruct;	// IMP=0x002000000000b730
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) TVNPOutputDeviceRoute *leader; // @synthesize leader=_leader;
- (id)_imageForGroupWithMembers:(id)arg1 leader:(id)arg2;	// IMP=0x001000000000b340
- (id)deviceImage;	// IMP=0x001000000000aeb0
- (void)updateWithGroupLeader:(id)arg1 members:(id)arg2;	// IMP=0x001000000000ab60
- (id)init;	// IMP=0x001000000000aaf0

@end

