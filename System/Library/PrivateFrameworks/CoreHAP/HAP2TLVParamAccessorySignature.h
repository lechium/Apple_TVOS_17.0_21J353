//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAP2TLVParamServiceList, HAPTLVUnsignedNumberValue, NSString;

__attribute__((visibility("hidden")))
@interface HAP2TLVParamAccessorySignature : NSObject
{
    HAPTLVUnsignedNumberValue *_accessoryID;	// 8 = 0x8
    HAP2TLVParamServiceList *_serviceList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000063af6
- (void).cxx_destruct;	// IMP=0x000000000005ee2a
@property(retain, nonatomic) HAP2TLVParamServiceList *serviceList; // @synthesize serviceList=_serviceList;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005eb38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005eaaa
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000005e79e
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005e468
- (id)initWithAccessoryID:(id)arg1 serviceList:(id)arg2;	// IMP=0x000000000005e3cf
- (id)init;	// IMP=0x000000000005e3a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
