//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, MRDIDSService, NSData, NSNumber;

@interface MRDIDSServiceMessage : NSObject
{
    IDSDevice *_device;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSNumber *_messageID;	// 24 = 0x18
    MRDIDSService *_service;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002e180
@property(retain, nonatomic) MRDIDSService *service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) NSNumber *messageID; // @synthesize messageID=_messageID;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) IDSDevice *device; // @synthesize device=_device;
- (_Bool)replyWithData:(id)arg1 priority:(long long)arg2;	// IMP=0x001000000002e0fa
- (id)initWithID:(id)arg1 data:(id)arg2 device:(id)arg3 service:(id)arg4;	// IMP=0x001000000002dfff

@end

