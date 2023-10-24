//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log;

@interface GTBulkDataService : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    unsigned long long _nextDownloadHandle;	// 16 = 0x10
    NSMutableDictionary *_dataDownloadStore;	// 24 = 0x18
    unsigned long long _nextUploadHandle;	// 32 = 0x20
    NSMutableDictionary *_dataUploadingStore;	// 40 = 0x28
    NSMutableDictionary *_dataUploadedStore;	// 48 = 0x30
    NSMutableDictionary *_dataUploadCompressionAlgorithm;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_dataAccessQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_dataTransferQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000096bf
- (id)takeUploadedDataForHandle:(unsigned long long)arg1;	// IMP=0x0010000000009503
- (_Bool)uploadChunk:(id)arg1 forHandle:(unsigned long long)arg2 isFinalChunk:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000090db
- (unsigned long long)newUploadWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008d26
- (unsigned long long)handoverDataForDownload:(id)arg1;	// IMP=0x0010000000008bc8
- (void)downloadData:(unsigned long long)arg1 usingTransferOptions:(id)arg2 chunkHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000081f2
- (id)init;	// IMP=0x00100000000080ee

@end

