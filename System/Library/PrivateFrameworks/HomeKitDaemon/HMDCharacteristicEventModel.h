//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 checkForSupport:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0010000000a060af
+ (id)properties;	// IMP=0x0010000000a0604c
+ (Class)cd_entityClass;	// IMP=0x00100000004223bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id eventValue; // @dynamic eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

