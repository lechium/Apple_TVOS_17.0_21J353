//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface FFDefaultFileWriter : NSObject
{
    NSDictionary *_fileAttributes;	// 8 = 0x8
    NSDictionary *_dirAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000010c9
@property(readonly, nonatomic) NSDictionary *dirAttributes; // @synthesize dirAttributes=_dirAttributes;
@property(readonly, nonatomic) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
- (_Bool)createDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000000fcb
- (_Bool)writeData:(id)arg1 toFile:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000000f3c
- (id)init;	// IMP=0x0000000000000f0d

@end

