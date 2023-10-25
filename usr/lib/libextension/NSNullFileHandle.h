//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileHandle.h"

__attribute__((visibility("hidden")))
@interface NSNullFileHandle : NSFileHandle
{
}

- (CDUnknownBlockType)readabilityHandler;	// IMP=0x0000000000641197
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000641191
- (CDUnknownBlockType)writeabilityHandler;	// IMP=0x0000000000641189
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000641183
- (int)fileDescriptor;	// IMP=0x0000000000641178
- (_Bool)closeAndReturnError:(out id *)arg1;	// IMP=0x0000000000641170
- (void)closeFile;	// IMP=0x000000000064116a
- (_Bool)synchronizeAndReturnError:(out id *)arg1;	// IMP=0x0000000000641162
- (void)synchronizeFile;	// IMP=0x000000000064115c
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000641154
- (void)truncateFileAtOffset:(unsigned long long)arg1;	// IMP=0x000000000064114e
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000641146
- (void)seekToFileOffset:(unsigned long long)arg1;	// IMP=0x0000000000641140
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000064112c
- (unsigned long long)seekToEndOfFile;	// IMP=0x0000000000641124
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x0000000000641110
- (unsigned long long)offsetInFile;	// IMP=0x0000000000641108
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000641100
- (void)writeData:(id)arg1;	// IMP=0x00000000006410fa
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x00000000006410e1
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x00000000006410c8
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;	// IMP=0x00000000006410af
- (id)readDataToEndOfFile;	// IMP=0x0000000000641096
- (id)availableData;	// IMP=0x000000000064107d

@end

