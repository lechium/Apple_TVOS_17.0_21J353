//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface LSSettingsStoreConfiguration : NSObject
{
    NSXPCListenerEndpoint *_endpoint;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000df946
- (void).cxx_destruct;	// IMP=0x00000000000dfac4
@property(readonly) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dfa8d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000df9cd
- (id)initWithEndpoint:(id)arg1;	// IMP=0x00000000000df94e

@end

