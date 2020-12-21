<script>
/*
    Suppose we know the coordinates of the vertices of a quadrilateral. (Points A, B, C and D). 
    We want to find the answer to the following question in the coordinate system with 
    the X axis increasing from left to right and the Y axis increasing from top to bottom.
    How can these points be ordered clockwise, starting from the upper left corner of the rectangle?
*/
    let points = {A, B, C, D};
    
    points.sort(function(p1, p2) { return p1.y - p2.y});
    
    if (points[0].x > points[1].x) {
        [points[0], points[1]] = [points[1], points[0]];
    }
    
    if (points[3].x > points[2].x) {
        [points[2], points[3]] = [points[3], points[2]];
    }
    
</script>
