//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface Core_Audio_Driver_Client_Info : NSObject
{
    _Bool _is_native_endian;	// 8 = 0x8
    unsigned int _client_id;	// 12 = 0xc
    int _process_id;	// 16 = 0x10
    NSString *_bundle_id;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000666cd
- (void).cxx_destruct;	// IMP=0x00000000000666bd
@property(retain, nonatomic) NSString *bundle_id; // @synthesize bundle_id=_bundle_id;
@property(nonatomic) _Bool is_native_endian; // @synthesize is_native_endian=_is_native_endian;
@property(nonatomic) int process_id; // @synthesize process_id=_process_id;
@property(nonatomic) unsigned int client_id; // @synthesize client_id=_client_id;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006654a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000066440
- (struct AudioServerPlugInClientInfo)create_asp_client_info;	// IMP=0x00000000000663ca
- (id)init_with_asp_client_info:(const struct AudioServerPlugInClientInfo *)arg1;	// IMP=0x0000000000066361

@end

