//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAP2TLVParamAccessoryList, NSString;

__attribute__((visibility("hidden")))
@interface HAP2TLVAccessorySignatureReadRequest : NSObject
{
    HAP2TLVParamAccessoryList *_accessoryList;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000063c50
- (void).cxx_destruct;	// IMP=0x000000000005dab8
@property(retain, nonatomic) HAP2TLVParamAccessoryList *accessoryList; // @synthesize accessoryList=_accessoryList;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d8f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d888
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000005d669
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005d406
- (id)initWithAccessoryList:(id)arg1;	// IMP=0x000000000005d39b
- (id)init;	// IMP=0x000000000005d36c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

