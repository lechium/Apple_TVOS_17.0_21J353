//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_custom_endpoint
{
    NSObject<OS_dispatch_data> *data;	// 232 = 0xe8
    CDUnknownBlockType resolver_block;	// 240 = 0xf0
    unsigned int type;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000003452c0
- (unsigned long long)getHash;	// IMP=0x0000000000345120
- (id)copyEndpoint;	// IMP=0x00000000003450f0
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x0000000000345040
- (char *)createDescription:(_Bool)arg1;	// IMP=0x0000000000344fe0
- (id)copyDictionary;	// IMP=0x0000000000344db0
- (unsigned int)type;	// IMP=0x0000000000344da0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

