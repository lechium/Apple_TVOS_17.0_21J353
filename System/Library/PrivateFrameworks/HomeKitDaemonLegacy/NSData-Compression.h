//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Compression)
+ (id)dataWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x002000000074f6fd
+ (id)dataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x002000000074f668
@property(readonly, copy) NSData *hmd_uncompressedData;
@property(readonly, copy) NSData *hmd_compressedData;
@end

