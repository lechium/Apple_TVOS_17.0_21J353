//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;
@protocol OS_os_log;

@interface GTFileWriterSessionUncompressed : NSObject
{
    NSArray *_fileEntries;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
    unsigned long long _currentFileIndex;	// 24 = 0x18
    unsigned long long _currentFileBytesWritten;	// 32 = 0x20
    int _fd;	// 40 = 0x28
    NSObject<OS_os_log> *_log;	// 48 = 0x30
}

+ (id)sessionWithFileEntries:(id)arg1 relativeToURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x002000000000e366
- (void).cxx_destruct;	// IMP=0x002000000000f1c2
- (void)_closeCurrentFileDescriptor;	// IMP=0x001000000000f19f
- (_Bool)finish:(id *)arg1;	// IMP=0x001000000000f14e
- (int)_getCurrentFileDescriptor:(id *)arg1;	// IMP=0x001000000000f127
- (_Bool)_writeUncompressedFileData:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000000eec2
- (void)writeFileData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000edfc
- (int)_openNextFile:(id *)arg1;	// IMP=0x001000000000eb8d
- (id)initWithFileEntries:(id)arg1 relativeToURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000e3f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

