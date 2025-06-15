Year 1 - Sem 1 

### **Project Name: "ShapeSketch Artist"**  
*(A creative name suggesting the program's ability to draw various geometric shapes.)*  

### **Project Overview**  
A **C++ Graphical Shapes Program** that allows users to draw different geometric shapes with customizable borders:  
- **Supported Shapes**: Square, Rectangle, Equilateral Triangle, Right-Angled Triangle, Rhombus.  
- **Dynamic Sizing**: Adjustable dimensions (base, height, side length).  
- **Custom Borders**: User-selectable border characters (e.g., `*`, `#`, `@`).  

---

### **Key Features**  
1. **Interactive CLI Menu**  
   - Prompts users to choose a shape or exit.  
2. **Shape Rendering**  
   - Uses nested loops to print hollow shapes with borders.  
3. **Mathematical Precision**  
   - Calculates spacing and alignment for complex shapes (e.g., rhombus, triangles).  
4. **Real-Time Output**  
   - Uses `flush` to display characters immediately.  

---

### **Skills Demonstrated**  
#### **Core C++**  
- **Control Structures**: `if-else` chains for shape selection.  
- **Nested Loops**: `for` loops to handle rows/columns of shapes.  
- **I/O Handling**: `cin`, `cout`, and `getline` for user interaction.  

#### **Algorithmic Logic**  
- **Geometric Calculations**:  
  - Equilateral Triangle: `2 * base + 1` columns for symmetry.  
  - Rhombus: Splits rendering into upper/lower halves.  
- **Border Detection**: Checks edge indices (`i == 0`, `j == size+1`, etc.).  

#### **User Experience**  
- **Input Validation**: Handles dynamic sizing (e.g., base/height for triangles).  
- **Visual Clarity**: Spaces and borders ensure shapes are recognizable.  

#### **Optimization**  
- **`flush` Usage**: Ensures immediate output for smoother rendering.  

---

### **Test Cases**  
| Shape                 | Input (Size/Base/Height) | Border Char | Output Preview             |  
|-----------------------|--------------------------|-------------|----------------------------|  
| Square                | Size: 5                  | `#`         | `#####`<br>`#   #`<br>`#####` |  
| Rhombus               | Side: 4                  | `*`         | Symmetric diamond shape     |  
| Right-Angled Triangle | Base: 6, Height: 4       | `+`         | Hypotenuse-aligned border   |  

---

### **Suggested Improvements**  
1. **Error Handling**: Validate inputs (e.g., positive integers).  
2. **More Shapes**: Add circle (approximated), pentagon, etc.  
3. **Fill Options**: Let users choose hollow/filled shapes.  
4. **GUI Integration**: Port to a graphics library (e.g., OpenGL).  

---

### **Why "ShapeSketch Artist"?**  
- **Descriptive**: Clearly indicates the program’s purpose.  
- **Engaging**: Appeals to both technical and creative users.  
- **Expandable**: Fits future additions (new shapes, colors).  

This project highlights  ability to **translate geometric logic into code** and **create interactive tools** with C++. 🎨  

--- 
Contributers: Mousa M Mousa, Omar Mohamed, Youssef Hamed
