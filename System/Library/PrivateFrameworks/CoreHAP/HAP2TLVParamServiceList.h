//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HAP2TLVParamServiceList : NSObject
{
    NSMutableArray *_serviceSignatureList;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000063a49
- (void).cxx_destruct;	// IMP=0x000000000005f71a
@property(retain, nonatomic) NSMutableArray *serviceSignatureList; // @synthesize serviceSignatureList=_serviceSignatureList;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005f554
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005f4ea
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000005f178
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005eef4
- (id)initWithServiceSignatureList:(id)arg1;	// IMP=0x000000000005ee81
- (id)init;	// IMP=0x000000000005ee52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

