//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserAccessCodeModel
{
}

+ (id)modelUUIDWithUUID:(id)arg1;	// IMP=0x00000000007f37fb
+ (id)properties;	// IMP=0x00000000007f37cb
- (id)initWithUserUUID:(id)arg1;	// IMP=0x00000000007f39c9

// Remaining properties
@property(retain) NSUUID *changedByUserUUID; // @dynamic changedByUserUUID;
@property(copy) NSString *value; // @dynamic value;

@end
