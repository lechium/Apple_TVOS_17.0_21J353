//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupResolveIntentSlot.h>

@interface SAIntentGroupResolveIntentSlot (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;	// IMP=0x0090000000006459
- (long long)ins_analyticsEndEventType;	// IMP=0x009000000000644e
- (long long)ins_analyticsBeginEventType;	// IMP=0x0090000000006443
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00900000000060e2
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x00900000000060d0
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x00900000000060be
- (id)ins_protobufEncodedIntent;	// IMP=0x00900000000060ac
- (id)ins_jsonEncodedIntent;	// IMP=0x009000000000609a
@end

