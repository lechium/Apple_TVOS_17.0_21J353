//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAP2TLVParamServiceList, NSString;

__attribute__((visibility("hidden")))
@interface HAP2TLVOldServiceList : NSObject
{
    HAP2TLVParamServiceList *_serviceList;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000066433
- (void).cxx_destruct;	// IMP=0x0000000000066423
@property(retain, nonatomic) HAP2TLVParamServiceList *serviceList; // @synthesize serviceList=_serviceList;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006625d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000661f3
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000065fd4
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000065d71
- (id)initWithServiceList:(id)arg1;	// IMP=0x0000000000065d06
- (id)init;	// IMP=0x0000000000065cd7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
