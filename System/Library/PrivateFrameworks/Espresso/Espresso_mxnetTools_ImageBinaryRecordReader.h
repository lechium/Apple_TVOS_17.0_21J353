//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject
{
    NSFileHandle *_recFileHandle;	// 8 = 0x8
    struct _mxnetTools_recordHeader_t_ _recordHeader;	// 16 = 0x10
    unsigned long long _currentOffset;	// 24 = 0x18
    NSMutableArray *_labelsPrivate;	// 32 = 0x20
    struct _mxnetTools_imageHeader_t_ _imageHeader;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000859ac1
@property(retain) NSMutableArray *labelsPrivate; // @synthesize labelsPrivate=_labelsPrivate;
@property unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property struct _mxnetTools_imageHeader_t_ imageHeader; // @synthesize imageHeader=_imageHeader;
@property struct _mxnetTools_recordHeader_t_ recordHeader; // @synthesize recordHeader=_recordHeader;
@property(retain) NSFileHandle *recFileHandle; // @synthesize recFileHandle=_recFileHandle;
- (struct _mxnetTools_imageID_t_)imageID;	// IMP=0x0000000000859970
- (id)labels;	// IMP=0x0000000000859875
- (id)imageData;	// IMP=0x000000000085970a
- (_Bool)nextRecordAndError:(id *)arg1;	// IMP=0x000000000085922a
- (_Bool)seekRecordWithID:(struct _mxnetTools_imageID_t_ *)arg1 error:(id *)arg2;	// IMP=0x000000000085912d
- (id)initWithRecFile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000858e5f

@end

