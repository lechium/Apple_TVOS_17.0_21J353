//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSettingRootGroupModel
{
}

+ (id)hmbProperties;	// IMP=0x0010000000b358f3
- (id)copyWithNewParentModelID:(id)arg1;	// IMP=0x0000000000b358b7
- (id)nameForKeyPath;	// IMP=0x0000000000b358a5
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;	// IMP=0x0000000000b35811

// Remaining properties
@property(copy, nonatomic) NSUUID *conflictResolutionToken; // @dynamic conflictResolutionToken;

@end

