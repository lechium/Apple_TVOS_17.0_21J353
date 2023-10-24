//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NUIFlowArrangementCell {
    id _field1;
    struct CGSize _field2;
    struct CGSize _field3;
    CDStruct_6c92d79e _field4;
    unsigned int :8;
    unsigned int :8;
};

struct _NUIGridArrangement {
    id container;
    unsigned int horzDist:8;
    unsigned int vertDist:8;
    _Bool baselineRelative;
    _Bool hasValidMeasurement;
    struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> cells;
    struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> columns;
    struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> rows;
    struct vector<CGRect, std::allocator<CGRect>> viewFrames;
};

struct _NUIGridArrangementCell;

struct _NUIGridArrangementDimension;

struct nui_size_cache {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<CGSize, CGSize>*, std::allocator<std::pair<CGSize, CGSize>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<CGRect, std::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double baseLineFromTop;
    double baseLineFromBottom;
} CDStruct_6c92d79e;

