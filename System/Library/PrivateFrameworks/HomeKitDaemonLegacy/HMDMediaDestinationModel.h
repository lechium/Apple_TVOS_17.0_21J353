//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationModel
{
}

+ (id)logCategory;	// IMP=0x001000000057db24
+ (id)properties;	// IMP=0x001000000057daf4
@property(readonly, copy) NSString *description;
- (id)attributeDescriptions;	// IMP=0x000000000057dde8
- (id)privateDescription;	// IMP=0x000000000057ddd6
- (id)logIdentifier;	// IMP=0x000000000057dd86
- (id)initWithDestination:(id)arg1 changeType:(unsigned long long)arg2;	// IMP=0x000000000057dce2

// Remaining properties
@property(retain) NSUUID *audioGroupIdentifier; // @dynamic audioGroupIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSNumber *supportedOptions; // @dynamic supportedOptions;
@property(retain) NSNumber *type; // @dynamic type;

@end

