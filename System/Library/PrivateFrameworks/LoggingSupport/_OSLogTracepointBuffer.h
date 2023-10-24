//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogTracepointBuffer : NSObject
{
    struct {
        unsigned int _field1;
        unsigned long long _field2;
        union {
            struct {
                struct tracev3_chunk_s *_field1;
                struct catalog_s *_field2;
                struct _OSLogEventChunkContext _field3;
                struct _firehose_unaligned_tracepoint_s *_field4;
            } _field1;
            struct {
                unsigned char _field1[16];
                struct os_timesync_time_entry_s _field2;
            } _field2;
            struct {
                unsigned char _field1[16];
                unsigned char _field2;
                _Bool _field3;
            } _field3;
        } _field3;
    } *_events;	// 8 = 0x8
    unsigned long long _cursor;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _size;	// 32 = 0x20
    _Bool _mutable;	// 40 = 0x28
}

- (void)enumerateEventsFromTime:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000190af
- (void)finishedInsertingTracepointsWithNextMajorTime:(unsigned long long)arg1 options:(unsigned int)arg2;	// IMP=0x0000000000018dd8
- (void)insertTracepoints:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2 options:(unsigned int)arg3;	// IMP=0x0000000000018acc
- (void)insertStatedumpChunk:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2;	// IMP=0x0000000000018ab8
- (void)insertSimpleChunk:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2 options:(unsigned int)arg3;	// IMP=0x0000000000018a49
- (void)insertChunk:(struct tracev3_chunk_s *)arg1 timestamp:(unsigned long long)arg2 subchunk:(id)arg3;	// IMP=0x00000000000188e7
- (void)insertNonsparsePoint:(unsigned long long)arg1 uuid:(unsigned char [16])arg2 ttl:(unsigned char)arg3 inMemory:(_Bool)arg4;	// IMP=0x0000000000018870
- (void)insertTimesyncPoints:(struct _os_timesync_db_s *)arg1 forBoot:(unsigned char [16])arg2 oldestContinuousTime:(unsigned long long)arg3;	// IMP=0x0000000000018784
- (void)beginInsertingTracepointsClippingFromTime:(unsigned long long)arg1;	// IMP=0x00000000000186da
- (_Bool)_isEmpty;	// IMP=0x00000000000186c4
- (void)dealloc;	// IMP=0x000000000001868a
- (id)init;	// IMP=0x0000000000018647

@end

