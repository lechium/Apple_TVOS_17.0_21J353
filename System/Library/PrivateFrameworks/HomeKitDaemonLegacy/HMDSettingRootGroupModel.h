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

+ (id)hmbProperties;	// IMP=0x00100000009b3c85
- (id)copyWithNewParentModelID:(id)arg1;	// IMP=0x00000000009b3c49
- (id)nameForKeyPath;	// IMP=0x00000000009b3c37
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;	// IMP=0x00000000009b3ba3

// Remaining properties
@property(copy, nonatomic) NSUUID *conflictResolutionToken; // @dynamic conflictResolutionToken;

@end

