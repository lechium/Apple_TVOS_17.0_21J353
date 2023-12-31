//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoIPCamera
{
    unsigned char _controlInfoCVO[8];	// 68 = 0x44
}

- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;	// IMP=0x000000000046f3ed
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;	// IMP=0x000000000046f3a5
- (_Bool)hasInfoType:(unsigned int)arg1;	// IMP=0x000000000046f392
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;	// IMP=0x000000000046f14d
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_51b15958 *)arg3;	// IMP=0x000000000046f108
- (unsigned long long)serializedSize;	// IMP=0x000000000046f0fe
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_51b15958 *)arg3 version:(unsigned char)arg4;	// IMP=0x000000000046f091
- (id)init;	// IMP=0x000000000046ee0b

@end

