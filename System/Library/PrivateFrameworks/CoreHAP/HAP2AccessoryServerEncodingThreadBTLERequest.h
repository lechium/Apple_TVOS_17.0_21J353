//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerEncodingThreadBTLERequest
{
    unsigned char _threadRequestType;	// 8 = 0x8
    long long _writeOptions;	// 16 = 0x10
    id _requestedValue;	// 24 = 0x18
}

+ (id)executeWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 error:(id *)arg4;	// IMP=0x006000000005b702
+ (id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 error:(id *)arg6;	// IMP=0x006000000005b538
+ (id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 contextData:(id)arg4 options:(long long)arg5 error:(id *)arg6;	// IMP=0x006000000005b36e
+ (id)attributeDatabaseRequest;	// IMP=0x006000000005b325
+ (id)notificationRequestForCharacteristic:(id)arg1 threadRequestType:(unsigned char)arg2 enforcePDUBodyLength:(_Bool)arg3;	// IMP=0x006000000005b2af
+ (id)readRequestForCharacteristic:(id)arg1;	// IMP=0x006000000005b24c
- (void).cxx_destruct;	// IMP=0x000000000005b239
@property(readonly, nonatomic) id requestedValue; // @synthesize requestedValue=_requestedValue;
@property(readonly, nonatomic) unsigned char threadRequestType; // @synthesize threadRequestType=_threadRequestType;
@property(readonly, nonatomic) long long writeOptions; // @synthesize writeOptions=_writeOptions;
@property(readonly, nonatomic) _Bool expectsResponseBody;

@end

