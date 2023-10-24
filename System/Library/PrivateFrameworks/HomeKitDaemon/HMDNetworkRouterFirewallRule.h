//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRule : HMFObject
{
    _Bool _critical;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDictionary *_jsonDictionary;	// 24 = 0x18
}

+ (id)__transportProtocolToString:(unsigned char)arg1;	// IMP=0x00100000006a04f4
+ (id)logCategory;	// IMP=0x00100000006a04c4
- (void).cxx_destruct;	// IMP=0x00000000006a0493
@property(readonly, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(readonly, nonatomic, getter=isCritical) _Bool critical; // @synthesize critical=_critical;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *jsonString;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;	// IMP=0x00000000006a003d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000069fec0
- (id)initWithJSONDictionary:(id)arg1 critical:(_Bool)arg2;	// IMP=0x000000000069fe0c
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3;	// IMP=0x000000000069fd48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
