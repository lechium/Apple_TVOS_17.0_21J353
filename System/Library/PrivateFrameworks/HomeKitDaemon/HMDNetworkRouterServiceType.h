//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterServiceType : NSObject
{
    NSString *_name;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005775ea
- (void).cxx_destruct;	// IMP=0x00000000005775da
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000577414
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005773aa
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000005771da
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000576f18
- (id)initWithName:(id)arg1;	// IMP=0x0000000000576ead
- (id)init;	// IMP=0x0000000000576e7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

