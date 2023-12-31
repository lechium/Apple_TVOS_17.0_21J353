//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAudioBuffer, NSData, _MRAudioDataBlockProtobuf;

__attribute__((visibility("hidden")))
@interface MRAudioDataBlock : NSObject
{
    MRAudioBuffer *_buffer;	// 8 = 0x8
    CDStruct_ace97b7a _time;	// 16 = 0x10
    float _gain;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000145a41
@property(readonly, nonatomic) float gain; // @synthesize gain=_gain;
@property(readonly, nonatomic) CDStruct_ace97b7a time; // @synthesize time=_time;
@property(readonly, nonatomic) MRAudioBuffer *buffer; // @synthesize buffer=_buffer;
- (void)_parseGain:(id)arg1;	// IMP=0x00000000001459f3
- (void)_parseTimestamp:(id)arg1;	// IMP=0x0000000000145990
- (void)_parseBuffer:(id)arg1;	// IMP=0x0000000000145463
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;	// IMP=0x0000000000145425
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001453f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001453c6
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRAudioDataBlockProtobuf *protobuf;
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000144e75
- (id)initWithData:(id)arg1;	// IMP=0x0000000000144df7

@end

