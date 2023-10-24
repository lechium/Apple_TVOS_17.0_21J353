//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSString;
@protocol StreamDelegate;

@interface DataStreamReader
{
    NSData *_data;	// 8 = 0x8
    unsigned long long _cursor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000016edb0
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000016ece7
- (void)close;	// IMP=0x001000000016ec9d
@property(readonly) _Bool hasBytesAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <StreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *streamError;
@property(readonly) unsigned long long streamStatus;
@property(readonly) Class superclass;

@end

